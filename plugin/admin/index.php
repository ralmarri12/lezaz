<?php
 
$lezaz->set('ajxURL','');
$lezaz->set('useajax','0');
$lezaz->set('skin','no-skin');
$lezaz->language('ar');

$lezaz->router(array('/admin/@*','admin'), function() use ($lezaz){
            $lezaz->main_template = '{template}admin/index';
            $lezaz->set('noajaxpage','index');
            $lezaz->set('index','open');
            
        });

 $lezaz->router('/admin/@str', function($b) use ($lezaz){
            $lezaz->set('noajaxpage',$b);
            $lezaz->set('index','');
            $lezaz->set($b.'_m','open');
            $lezaz->set($b,'active');
        });
        
 $lezaz->listen('output.filter', function($output, $filtered) use($lezaz){
     $search=array('{{ajxurl}}','{plugin}', '{template}', '{tmp}', '{cache}', '{uploaded}', '{theme}');
     $replace=array($lezaz->get('ajxURL'),PLUGIN_LINK, TEMPLATE_LINK, TMP_LINK, CACHE_LINK, UPLOADED_LINK, THEME_LINK);
    
     
        $output = empty($filtered) ? $output : $filtered;
        return str_replace($search,$replace,$output);
});
       
       