(function(a,b,c){"use strict",a.fn.selectText=function(){var a=this[0],d=b.body.createTextRange,e=c.getSelection(),f=b.createRange(),g;b.body.createTextRange?(d.moveToElementText(a),d.select()):c.getSelection&&(e.setBaseAndExtent?e.setBaseAndExtent(g,0,g,1):(f.selectNodeContents(a),e.removeAllRanges(),e.addRange(f)))}})(jQuery,document,window)
jQuery(document).ready(function(){
    jQuery('.shorten input').attr('checked', false);
    jQuery('.shorten').click(function(){
        jQuery(this).parent().find('.pw-question-link .text-field').toggle();
        jQuery(this).parent().find('.pw-question-link .text-field').toggleClass('permalink');
        jQuery(this).parent().find('input').attr('checked', !jQuery(this).parent().find('input').attr('checked'));
        return false;
    });
    jQuery('.permalink-wrapper .text-field').click(function(){
        //alert('foo');
        jQuery(this).selectText();
    });
});