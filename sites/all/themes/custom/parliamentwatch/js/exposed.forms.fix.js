/**
 * Created by opal on 06.09.13.
 */
(function ($) {

// Code addition to fix reset on exposed forms in AJAX - without this, reset goes to front page.

    $(document).delegate('#edit-reset','click',function(event)
    {
        event.preventDefault();
        $('form').each(function(){
            $('form select option').removeAttr('selected');
            this.reset();
        });
        $('.views-submit-button .form-submit').click();
        return false;
    });

})(jQuery);
