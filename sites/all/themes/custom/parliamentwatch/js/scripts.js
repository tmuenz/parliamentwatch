jQuery(document).ready(function() {

////// intelligente on:blur
    jQuery("input[type=text],textarea").blur(function() {
        if(jQuery(this).val() == "") {
            jQuery(this).val(jQuery(this).attr("alt"));
        }
    });

// intelligentes on:focus
    jQuery("input[type=text],textarea").focus(function() {
        if(jQuery(this).val() == jQuery(this).attr("alt")) {
            jQuery(this).val("");
        }
    });

////// slide to comments

   jQuery(".node-blogpost.view-mode-full .comment-count")
    .css( "cursor", "pointer" )
   .click(function () {
		goToByScroll("comments");
		return false;
    });

////// change youtube links to open them in a colorbox (http://drupal.org/node/1368274)

    jQuery('a.colorbox-load').each(function(){
        var newUrl = jQuery(this).attr('href').replace('youtube.com/watch?v=', 'youtube.com/v/');
        jQuery(this).attr('href', newUrl);
    });

////// change sharethis defaults

    stLight.options({newOrZero:"zero"});

////// add a sharethis link to an anchor

    jQuery('.add-sharethis').each(function (i) {
    
        var st_url = location.protocol + '//'+location.host+location.pathname + '#' + jQuery(this).closest('div').attr('id');
        
        jQuery(this).append('<span class="sharethis-wrapper"><span class="st_sharethis_hcount" onhover="false" st_url="' + st_url + '" displayText=""></span></span>');
    
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



