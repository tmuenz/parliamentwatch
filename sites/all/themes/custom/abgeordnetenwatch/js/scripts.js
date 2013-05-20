jQuery(document).ready(function() {

////// change sharethis defaults

    stLight.options({newOrZero:"zero"});

////// add a sharethis link to an anchor

    jQuery('.add-sharethis').each(function (i) {
    
        console.log("SHARE THIS");
        //for subsite
        var st_url = location.protocol + '//'+location.host+location.pathname + '/' + jQuery(this).closest('div').attr('id');
                // for anchor
        var link_title = jQuery(this).closest('div').attr('title');
        console.log(link_title);
        jQuery(this).append('<span class="sharethis-wrapper"><span class="st_sharethis_hcount" onhover="false" st_title="'+link_title+'" st_url="'+st_url+'" displayText="'+link_title+'"></span></span>');
    
    });

//// Report Link

   jQuery("a.report_message").click(function () {
		if(!confirm('Soll sich ein Moderator Frage und Antwort angeschauen?')){
			return false;
		}
		var message_id = jQuery(this).attr('id').substr(jQuery(this).attr('id').indexOf('_') + 1);
		var url = 'http://mod.parliamentwatch.org/piraten/api/message/' + message_id + '/report';
		jQuery.get(url);
		alert('Vielen Dank! Ein Moderator wird sich darum kümmern.');
    });


////// Navigation highlighting

    jQuery("#nice-menu-1 li").mouseenter(function(){
        jQuery("#nice-menu-1 li.active-trail").removeClass('active-trail').addClass('active-invisible');
    }).mouseleave(function(){
        jQuery("#nice-menu-1 li.active-invisible").removeClass('active-invisible').addClass('active-trail');
    });


////// Info icon

    jQuery(".info-title").click(function(){
        jQuery(".info-title + .info-content").fadeToggle("slow", "linear");
    });


////// Print icon

    jQuery(".external").click(function(){
        jQuery(this).attr('target', '_blank');
    });
    
    
////// Scroll to "Questions and Answers"

    function goToByScroll(id){
        jQuery('html,body').animate({scrollTop: jQuery("#"+id).offset().top},'1000');
    }
    jQuery(".page-user .link-qa").click(function () {
        goToByScroll("block-views-profile-questions-answers-block");
        return false;
    });
    jQuery(".page-user .link-question").click(function () {
        goToByScroll("block-webform-client-block-17");
        return false;
    });
    jQuery(".anchor-to-top a").click(function () {
        goToByScroll("page");
        return false;
    }); 
    
     
});



