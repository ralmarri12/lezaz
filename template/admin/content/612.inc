 
<title>[Control Panel] - [configuration]</title>

<!-- ajax layout which only needs content area -->
<div class="page-header">
    <h1>
        4.12

    </h1>
</div><!-- /.page-header -->

<style>
    .maindiv{clear: both;}
    .steps{float: left;    width: 30px;    height: 30px;}
    .jobs{ width: 40%;    height: 100px;}

    .sortarpa{    float: left;    width: 32px;    height: 30px;    text-align: center;}
    .fieldl ,.fieldc{
        float: left;
        width: 30px;
        height: 32px;
        overflow: hidden;
        margin-top: -6px;
    }    .risk{float: left;    width: 30px;text-align: center;background: #333;    color: #fff;    height: 30px;}
    .inputmain{ height: 30px;}
    .selectmain{width: 58px;    height: 30px;    overflow: hidden;float: left;}
    .addbutton{    float: left;    height: 30px;    width: 85px;    overflow: hidden;}
    .buttonpic{    width: 26px;    padding: 0px;}
    .xdinput {
        background: #ffd;
        border: 1px solid #ced;
    }


    .subhand {
        left: -13px !important;
        top: -10px !important;
        position: relative !important;
        float: left;
    }
    .dd {

        max-width: none;

    }
     .potintiolhaz{ height: 100px;}
.form-group {
    margin-bottom: 0;
}     
    /*  .dd-item, .dd-empty, .dd-placeholder{    display: flex !important;}*/
</style>

lezaz:msg()

<form method="post">

    <div class="dd" id="nestable">
        <ol class="dd-list" id='contener'>

            <lezaz:sql id='hazar_jobs_sql' sql="Select * From jobs ORDER BY sort ASC" limit="10000">   
                <li  class="dd-item dd2-item dd-colored mainroot sortar" id="mainroot_lezaz#hazar_jobs_sql[id]">            
                    <div class='dd-handle dd2-handle steps'>
                        <span>lezaz#hazar_jobs_sql[sort]</span>
                        <input class="stepshide" type="hidden" name="sort[mainroot_lezaz#hazar_jobs_sql[id]]" value="1"/>
                    </div>
                    <div class="dd2-content no-hover" >
                        <div class='jobs xddiv'>
                            <input name='jobs[mainroot_lezaz#hazar_jobs_sql[id]]' value="lezaz#hazar_jobs_sql[job]" class='inputmain xdinput'/>
                        </div>

                        <div class="[style-pullar] action-buttons">                                         
                            <a href="javascript:"><i id="mainroot_{{lezaz#hazar_jobs_sql[id]}}delete" class="ace-icon fa fa-trash-o icon-on-right bigger-110"></i></a>
                            <a href="javascript:"><i id="mainroot_{{lezaz#hazar_jobs_sql[id]}}add" class="ace-icon fa fa-plus icon-on-right bigger-110"></i></a>
                        </div>                    
                    </div>

                    <ol class="dd-list">
                        <lezaz:sql id='potential_sql' sql="Select * From potential where id_job='lezaz#hazar_jobs_sql[id]'  ORDER BY sort ASC" limit="10000">  
                            <li class="dd-item dd2-item dd-colored mainroot_lezaz#hazar_jobs_sql[id]" fork='mainroot_lezaz#hazar_jobs_sql[id]' id="dlezaz#potential_sql[id]">
                                <div class="dd-handle dd2-handle sortarpa sortarpamainroot_lezaz#hazar_jobs_sql[id]">
                                    <span>lezaz#potential_sql[sort]</span>
                                    <input class="sortarpahide" type="hidden" name="sortx[mainroot_lezaz#hazar_jobs_sql[id]][]" value="lezaz#potential_sql[sort]"/>
                                </div>

                                <div class="dd2-content no-hover">
                                    <div class='potential xddiv'>
                                        <input name='potential[mainroot_lezaz#hazar_jobs_sql[id]][]' value='lezaz#potential_sql[potential]' class='inputmain xdinput'/>
                                    </div>                     
                                    <div class="[style-pullar] action-buttons">                                          

                                        <div class='fieldl xddiv'>
                                            <select name='fieldl[mainroot_lezaz#hazar_jobs_sql[id]][]' onchange="selectmain('lezaz#potential_sql[id]')" class='selectmain selectmainllezaz#potential_sql[id] '>
                                                <option>lezaz#potential_sql[l]</option>
                                                <option>1</option>
                                                <option>2</option>
                                                <option>3</option>
                                                <option>4</option>
                                                <option>5</option>
                                            </select>
                                        </div>
                                        <div class='fieldc xddiv'>
                                            <select name='fieldc[mainroot_lezaz#hazar_jobs_sql[id]][]' onchange="selectmain('lezaz#potential_sql[id]')" class='selectmain selectmainclezaz#potential_sql[id]'>
                                                <option>lezaz#potential_sql[c]</option>
                                                <option>1</option>
                                                <option>2</option>
                                                <option>3</option>
                                                <option>4</option>
                                                <option>5</option>
                                            </select>
                                        </div>
                                        <div class='risklezaz#potential_sql[id] risk xddiv'>

                                        </div>
                                        <a class="green plusbutton" href="javascript:">
                                            <i id="lezaz#potential_sql[id]" fork='mainroot_lezaz#hazar_jobs_sql[id]' class="ace-icon fa fa-trash-o bigger-130 delete_item"></i>
                                        </a>
                                    </div>                      
                                </div>                                      
                            </li>
                        </lezaz:sql>
                    </ol>                    
                </li>  
            </lezaz:sql>                          
        </ol>
    </div>           




    <div class='maindiv hidden' id="addmain">

        <li  class="dd-item dd2-item dd-colored mainroot sortar" id="000typexc000">            
            <div class='dd-handle dd2-handle steps'>
                <span>1</span>
                <input class="stepshide" type="hidden" name="sort[000typexc000]" value="1"/>
            </div>
            <div class="dd2-content no-hover" >
                <div class='jobs xddiv'>

                    <lezaz:input type="select" class="selecttypelevel1" forx="000typexc000" id="id_hazar_level1_000typexc000" sql="select id,hazardname from hazar_level1" placeholder="[hazard section]"></lezaz:input>                
                    <lezaz:input type="select" class="selecttypelevel2" forx="000typexc000" id="id_hazar_level2_000typexc000" sql="select id,hazardname,id_hazar_level1 from hazar_level2" option-attr="root" placeholder="[hazard section]"></lezaz:input>                
                    <input name='jobs[000typexc000]' value="" class='inputmain xdinput job_000typexc000'/>     
                    <input id="related_000typexc000" type="hidden" name="related[000typexc000]" value="0"/>

                </div>

                <div class="[style-pullar] action-buttons">                                         
                    <a href="javascript:"><i id="000typexc000delete" class="ace-icon fa fa-trash-o icon-on-right bigger-110"></i></a>
                    <a href="javascript:"><i id="000typexc000add" class="ace-icon fa fa-plus icon-on-right bigger-110"></i></a>
                </div>                    
            </div>

            <ol class="dd-list">

            </ol>                    
        </li>          

    </div>

    <div class='maindiv hidden' id='addsub'>
        <li class="dd-item dd2-item dd-colored 000type000" fork='000type000' id="d000typexc000">
            <div class="dd-handle dd2-handle sortarpa sortarpa000type000">
                <span>lezaz#potential_sql[sort]</span>
                <input class="sortarpahide" type="hidden" name="sortx[000type000][]" value="lezaz#potential_sql[sort]"/>
            </div>
  
            <div class="dd2-content no-hover potintiolhaz">
                <div class='potential xddiv'>
                    <lezaz:input type="select" class="selecttypelevel3_000type000" forx="000type000" id="id_hazar_level3_000typexc000" sql="select id,hazardname,id_hazar_level2 from hazar_level3" option-attr="root" placeholder="[hazard section]"></lezaz:input>                
                    <input id="related_000typexc000" type="hidden" name="related1[000type000]" value="0"/>
                    <input id="potential_000typexc000" name='potential[000type000][]' value='' class='inputmain xdinput col-xs-10'/>
                </div>                     
                <div class="[style-pullar] action-buttons col-xs-2">                                          

                    <div class='fieldl xddiv'>
                        <select name='fieldl[000type000][]' onchange="selectmain('000typexc000')" class='selectmain selectmainl000typexc000 '>
                            <option></option>
                            <option>1</option>
                            <option>2</option>
                            <option>3</option>
                            <option>4</option>
                            <option>5</option>
                        </select>
                    </div>
                    <div class='fieldc xddiv'>
                        <select name='fieldc[000type000][]' onchange="selectmain('000typexc000')" class='selectmain selectmainc000typexc000'>
                            <option></option>
                            <option>1</option>
                            <option>2</option>
                            <option>3</option>
                            <option>4</option>
                            <option>5</option>
                        </select>
                    </div>
                    <div class='risk000typexc000 risk xddiv'>

                    </div>
                    <a class="green plusbutton" href="javascript:">
                        <i id="000typexc000"  class="ace-icon fa fa-trash-o bigger-130 delete_item"></i>
                    </a>
                </div>                      
            </div>                                      
        </li>         
    </div>


    <div class="form-actions center">
        <button id="add_item" type="button" class="btn btn-sm btn-info">
            Add JOB STEP
            <i class="ace-icon fa fa-plus icon-on-right bigger-110"></i>
        </button>
        <button type="submit" class="btn btn-sm btn-success">
            Submit
            <i class="ace-icon fa fa-arrow-right icon-on-right bigger-110"></i>
        </button>                 
    </div>  
    <input type="hidden" name="bassam" value="essa"/>
</form>

<script>

    var modaldel = '';
    $(".deleteuser").click(function() {
        modaldel = $(this);
    }).on(ace.click_event, function() {
        bootbox.confirm("[are you sure?]", function(result) {
            if (result) {
                $.ajax('/?delete_t=' + modaldel.attr('tbl') + '&delete_id=' + modaldel.attr('usr'));
                $('#' + modaldel.attr('tbl') + modaldel.attr('usr')).hide('fast');
            }
        });
    });


    $('.mainroot').each(function() {
        var x = $(this).attr('id');//element id flooridhere

        $('#' + x + 'delete').click(function() {
            $('#' + x).remove();
            $('.' + x).remove();
            sortstep();
        });
        $('#' + x + 'add').click(function() {
            var x1 = 'X' + Math.floor((Math.random() * 1000000000000000) + 1);//element id flooridhere
            $($('#addsub').html().replace(/000typexc000/g, x1).replace(/000type000/g, x)).insertAfter('#' + x);
            $('#' + x1).click(function() {
                $('#d' + x1).remove();
                sortarpa(x);
            });
            sortarpa(x);
        });
        sortstep();
    });

    $('.delete_item').click(function() {
        var x = $(this).attr('fork');
        $('#d' + $(this).attr('id')).remove();
        sortarpa(x);
    });

    $('#add_item').on('click', function() {
        var x = 'X' + Math.floor((Math.random() * 1000000000000000) + 1);//element id flooridhere
        $('#contener').append($('#addmain').html().replace(/000typexc000/g, x));
        $('#' + x + 'delete').click(function() {
            $('#' + x).remove();
            $('.' + x).remove();
            sortstep();
        });

        $('#id_hazar_level1_' + x).on('change', function() {
            select_connect('#id_hazar_level1_' + x, '#id_hazar_level2_' + x, '.job_' + x, '#related_' + x);
        });
        $('#id_hazar_level2_' + x).on('change', function() {
            $('.job_' + x).val($('#id_hazar_level2_' + x + ' option:selected').text().trim());
            $('#related_' + x).val($('#id_hazar_level2_' + x).val());
            
      select_connect('#id_hazar_level2_' + x, '.selecttypelevel3_' + x, 'l_8' , 'l_8');      
        });


        $('#' + x + 'add').click(function() {
            var x1 = 'X' + Math.floor((Math.random() * 1000000000000000) + 1);//element id flooridhere
            $($('#addsub').html().replace(/000typexc000/g, x1).replace(/000type000/g, x)).insertAfter('#' + x);
            $('#' + x1).click(function() {
                $('#d' + x1).remove();
                sortarpa(x);
            });
   
            $('#id_hazar_level3_' + x1).on('change', function() {
                $('#potential_' + x1).val($('#id_hazar_level3_' + x1 + ' option:selected').text().trim());
                $('#related_' + x1).val($('#id_hazar_level3_' + x1).val());
            });

            sortarpa(x);
        });
        sortstep();
    });

    function select_connect(s1, s2, t, r) {
        $(s2 + ' option').hide();
        $(s2 + ' option[root="' + $(s1).val() + '"]').show();
        $(s2).val('');
        $(r).val('');
        $(t).val('');
    }
    function selectmain(mainid) {

        var arraycolor = {
            1: 'green',
            2: 'green',
            3: 'green',
            4: 'green',
            5: '#FFD400',
            8: '#FFD400',
            9: '#FFD400',
            6: '#FFD400',
            10: '#FF8100',
            15: '#FF8100',
            16: '#FF8100',
            12: '#FF8100',
            20: 'red',
            25: 'red'
        }
        var no1 = $('.selectmainl' + mainid).val()
        var no2 = $('.selectmainc' + mainid).val()
        var no3 = no1 * no2;
        $(".risk" + mainid).text(no3).css('background', arraycolor[no3]);

    }
    function sortstep() {
        var sort = 0;
        $('.sortar').each(function() {
            sort++;
            $(this).find('.steps>span').text(sort);
            $(this).find('.stepshide').val(sort);

        });
    }
    function sortarpa(t) {
        var sort = 0;
        var dv = $('#' + t).find('.steps').text();
        $(' .sortarpa' + t).each(function() {
            sort++;
            $(this).find('span').text(dv + '.' + sort);
            $(this).find('.sortarpahide').val(dv + '.' + sort);

        });
    }
</script>


<!-- page specific plugin scripts -->

<!--[if lte IE 8]>
  <script src="/template/Ace1.3.3/assets/js/excanvas.js"></script>
<![endif]-->

