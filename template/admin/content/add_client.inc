
<title>Form Elements - Ace Admin</title>

<!-- ajax layout which only needs content area -->
<div class="page-header">
	<h1>
		[clients]
		<small>
			<i class="ace-icon fa fa-angle-double-right"></i>
			[add client]
		</small>
	</h1>
</div><!-- /.page-header -->
<div class="row">
	<div class="col-xs-12">
		<!-- PAGE CONTENT BEGINS -->
                <form id="formregister" class="form-horizontal" role="form" method="post" target="ajaxform"> 
			<!-- #section:elements.form -->
                         
          
[input:"text","client_name","","[client_name]","5","r","[client_name]"end input] 
[input:"text","client_phone","","[phone]","5","r","[phone]"end input] 
[input:"text","client_mobile","","[mobile]","5","","[mobile]"end input] 
[input:"text","client_address","","[address]","5","","[address]"end input] 
[input:"text","client_comment","","[comment]","12","","[comment]"end input] 





[if:"[var:"editTable1-var"end var]","
[input:"hidden","client_id"end input] 


			<div class="clearfix form-actions">
				<div class="col-md-offset-3 col-md-9">
                                      
[input:"submit","submit_Table1","[update]","btn-info","fa-check"end input]     


[else]

			<div class="clearfix form-actions">
				<div class="col-md-offset-3 col-md-9">
                                      
[input:"submit","submit_Table1","[submit]","btn-info","fa-check"end input]     

"end if]

&nbsp; &nbsp;  
[input:"reset","button1","[reset]","","fa-undo"end input]                                     
[input:"hidden","redirect_page","managment_client"end input] 
[input:"hidden","tablename","client"end input]                                   
				</div>
			</div>
                </form>
			
		<!-- PAGE CONTENT ENDS -->
	</div><!-- /.col -->
</div><!-- /.row -->

<!-- page specific plugin scripts -->

<!--[if lte IE 8]>
  <script src="/template/Ace1.3.3/assets/js/excanvas.js"></script>
<![endif]-->

[include:"{template}admin/jsajax"end include]	