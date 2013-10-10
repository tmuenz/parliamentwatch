jQuery(document).ready(function() {

/* MAINMENU MOBILE
http://osvaldas.info/drop-down-navigation-responsive-and-touch-friendly
Considering the markup above, the plugin should be only applied to the items that are parents – in order to avoid double-tap requirement on drop-down-less items
*/

$('#nav li:has(ul)').doubleTapToGo();


////// switch view mode in questions and answers

    jQuery(".view-id-profile_questions_answers .attachment").addClass("js-hide");
    jQuery("#form-view-mode-switcher .view-mode-full").click(function () {
        jQuery("#pw-block-questions-and-answers > .view-id-profile_questions_answers > .view-content").removeClass("js-hide");
        jQuery(".view-id-profile_questions_answers .attachment").addClass("js-hide");
    });
    jQuery("#form-view-mode-switcher .view-mode-teaser").click(function () {
        jQuery("#pw-block-questions-and-answers > .view-id-profile_questions_answers > .view-content").addClass("js-hide");
        jQuery(".view-id-profile_questions_answers .attachment").removeClass("js-hide");
    });


////// open external links in new window

    var domainparts = location.hostname.split('.');
    var sndleveldomain = domainparts.slice(-2).join('.');

    jQuery("a[href*='http://']:not([href*='"+sndleveldomain+"']),[href*='https://']:not([href*='"+sndleveldomain+"'])")
        .attr("rel","external")
        .attr("target","_blank")
        .addClass("external");

////// intelligent on:blur

    jQuery("input[type=text],textarea").blur(function() {
        if(jQuery(this).val() == "") {
            jQuery(this).val(jQuery(this).attr("alt"));
        }
    });

// intelligent on:focus

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

    jQuery(".ic-info").click(function(){   
        jQuery(this).find(".info-content").fadeToggle("slow", "linear");
        jQuery(".ic-info .info-content").not(jQuery('.info-content', this)).fadeOut("slow", "linear");
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
        goToByScroll("pw-block-questions-and-answers");
        return false;
    });
    jQuery(".page-user .link-question").click(function () {
        goToByScroll("pw-block-question-form");
        return false;
    });
    jQuery(".anchor-to-top a").click(function () {
        goToByScroll("page");
        return false;
    });

});



