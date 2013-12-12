jQuery(document).ready(function() {

    if (jQuery('div').hasClass('ds-left-1')) {
        jQuery('#region-content').removeClass('slider-stage');
    }

    jQuery("#widget_pager_bottom_slider-block").click(function () {
    
        if(jQuery('.view-slider .views-slideshow-controls-top').css('display') != 'block') {
            jQuery('.slider-stage').animate({
                paddingTop: "188px"
            }, 500, function() {
                    jQuery('.view-slider .views-slideshow-controls-top').fadeIn('slow');
                    jQuery('#views_slideshow_cycle_main_slider-block').fadeIn('slow');
            });          
        } return false;
    });

    jQuery("#views_slideshow_cycle_main_slider-block .close").click(function () {

        jQuery('#views_slideshow_cycle_main_slider-block').fadeOut('slow');  
        jQuery('#views_slideshow_cycle_main_slider-block').css('display','none');    
        jQuery('.views-slideshow-controls-top').fadeOut('slow', function() {
            jQuery('.slider-stage').animate({
                paddingTop: "0"
            }, 500); 
            
            jQuery('#widget_pager_bottom_slider-block .views-slideshow-pager-field-item').removeClass('active');
        });        
    });
    
    jQuery('#views_slideshow_pager_field_item_bottom_slider-block_0').removeClass('active');
});
