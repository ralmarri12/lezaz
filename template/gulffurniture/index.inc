
<lezaz:block file="header_en" param1="bassam" param2="ahmad"/>
<div class="slider">
    <ul id="slider">        
   [sql:"slider_sql","Select * From slider ORDER BY sort ASC","1000","                     
        <li>
            <img width="2000" height="550" src="{{upload}}slider/%slider_sql:image%"" class="attachment-full wp-post-image" alt="%slider_sql:title1e%">
        </li>		                            
    "end sql]                               
    </ul>
    <div class="slider-overlay"></div>
</div>

<div class="main">
    <div class="home-section">
        <div class="left">
            <h3 class="page-title">About Us</h3>
            <div class="text">[var:"pagedata[page_cont]"end var]</div>                        
        </div>
        <div class="right">
            <h3 class="page-title"><a href="/news/">Latest News</a></h3>
            <div class="list-small">
                <ul>
                    [sql:"news_sql","Select * From project where url=13 ORDER BY sort ASC","2","                                         
                    <li>
                        <a class="animate" href="/news/%news_sql:id%">
                            <div class="img"><img width="50" height="50" src="{{upload}}project/%news_sql:image%" class="attachment-thumb-img wp-post-image" alt="cbs-1"></div>
                            <div class="content">
                                <h4 class="date">%news_sql:title_en%</h4>
                                <div>%news_sql:more_en%</div>
                            </div>
                        </a>
                    </li>
                    "end sql]                                        
                </ul>
            </div>
        </div>
        <div class="clear"></div>
    </div>

    <div class="boxes">
        <h3 class="page-title"><a href="/services/">Our Services</a></h3>
        <ul>
            [sql:"services_sql","Select * From project where url=11 ORDER BY sort ASC","4","                                         
            <li class='box  [php:"changecolor();"end php]'>
                <a href="/services/%services_sql:id%">
                    <img src="{{upload}}project/%services_sql:image%" class="box-img">
                    <div class="box-content bg">
                        <div class="box-content-icon"></div>
                        <span class="box-content-separator"></span>
                        <h3 class="box-content-text">%services_sql:title_en%</h3>
                    </div>
                </a>
            </li>
            "end sql]                                                               
        </ul>
        <div class="clear"></div>
    </div><!--boxes end here-->
        <div class="page-saperator"></div>
    <div class="boxes">
        <h3 class="page-title"><a href="/product/">Our Products</a></h3>
        <ul>
            [sql:"product_sql","Select * From project where url=14 ORDER BY sort ASC","4","                                         
            <li class='box  [php:"changecolor();"end php]'>
                <a href="/product/%product_sql:id%">
                    <img src="{{upload}}project/%product_sql:image%" class="box-img">
                    <div class="box-content bg">
                        
                        
                        <h3 class="box-content-text" style='text-align: center;width: 100%;'>%product_sql:title_en%</h3>
                    </div>
                </a>
            </li>
            "end sql]                                                               
        </ul>
        <div class="clear"></div>
    </div><!--boxes end here-->
    <div class="page-saperator"></div>
    
    
    <h3 class="page-title"><a href="/solutions/">Solutions</a></h3>
        <div class="text">
            <div class="list-small">
                <ul>
            
                   [sql:"solutions_sql","Select * From project where url=15 ORDER BY sort ASC","1000","                                         
                    <li>
                        <a class="animate" href="/solutions/%solutions_sql:id%">
                            <div class="content">
                                <h4 class="date subject">%solutions_sql:title_en%</h4>
                                <div>%solutions_sql:title1_en%</div>
                            </div>
                        </a>
                    </li>
                    "end sql]                          
          </ul>
            </div>       
</div>                
     <div class="page-saperator"></div>       
        
        
    <h3 class="page-title">Our Clients</h3>
    <div id="carousel" class="carousel">
        <a href="javascript:" class="carousel-arrow carousel-arrow-left animation prev"></a>
        <a href="javascript:" class="carousel-arrow carousel-arrow-right animation next"></a>
        <div class="carousel-wrapper">
            <ul>
                [sql:"client_sql","Select * From client ORDER BY sort ASC","1000","
                <li><a href="%client_sql:url%" title="International Labour Organization"><img src="{{upload}}client/%client_sql:image%" class="client" alt="%client_sql:title_en%"></a></li>
                "end sql]
            </ul>
        </div>
    </div>
</div>


[include:"footer_en"end include] 