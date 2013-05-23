<?php
/**
 * @file
 * subsite_conf.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function subsite_conf_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Blog description';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'blog_description';
  $fe_block_boxes->body = '<p>
	Unser Blog ist - wie das Gesamtprojekt "abgeordnetenwatch.de" - überparteilich. Politikerinnen und Politiker werden nicht aufgrund ihrer Parteizugehörigkeit bevorzugt, benachteiligt, kritisiert oder hervorgehoben. Der Blog versteht sich als ergänzende Diskussionsplattform zum Angebot von abgeordnetenwatch.de. Er berichtet über das Projekt und nimmt Stellung zu Transparenz, Bürgernähe<br />
	und Teilhabe in der Politik.
</p>

<p>
	Alle Leserinnen und Leser sind eingeladen an der Diskussion teilzunehmen. Die Blogautoren selbst sind Mitglieder des abgeordnetenwatch.de-Teams. Ihre Einträge drücken nicht unbedingt die Position des Gesamtprojekts abgeordnetenwatch.de aus.&nbsp;
</p>
';

  $export['blog_description'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Metanavi Addthis';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'metanavi_addthis';
  $fe_block_boxes->body = '<!-- AddThis Button BEGIN -->
<div class="addthis_toolbox addthis_default_style ">
<a class="addthis_button_email"> Email</a>
<a class="addthis_button_facebook"> Facebook</a>
<a class="addthis_button_google_plusone"></a>
<a class="addthis_button_delicious"> Delicious</a>
<a class="addthis_button_favorites"> Favorit</a>
<a class="addthis_button_twitter"> Twitter</a>
<a class="addthis_button_stumbleupon"> StumbleUpon</a>
<a class="addthis_button_more"> more</a>
</div>
<script type="text/javascript" src="http://s7.addthis.com/js/250/addthis_widget.js#pubid=xa-4f9976e51a56ded5"></script>
<!-- AddThis Button END -->';

  $export['metanavi_addthis'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Ihr Pressekontakt';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'press_contact';
  $fe_block_boxes->body = '<div class="clearfix">
<p><img align="left" alt="Gregor Hackmann" border="2" class="media-image attr__typeof__foaf:Image img__fid__5994 img__view_mode__media_original attr__format__media_original" height="208" src="http://de.parliamentwatch.silversurfer/sites/abgeordnetenwatch.de/files/gregor-hackmann.jpg" style="margin-right:5px;padding:5px;" title="" typeof="foaf:Image" width="138" />Für Fragen stehen wir Ihnen gerne zur Verfügung.<br />
Für O-Töne, Interviews, Fragen zu abgeordnetenwatch.de wenden Sie sich bitte an</p>

<p><strong>Gregor Hackmack</strong></p>

<p>Telefon: 040 / 317 69 10 - 55<br />
Fax: 040 / 317 69 10 - 28<br />
hackmack@abgeordnetenwatch.de</p>

<p>Bürozeiten:<br />
Montag - Freitag 10:00 - 16:00 Uhr</p>
</div>
<hr />
<div class="clearfix">
<p><img align="left" alt="Martin Reher" border="2" class="media-image attr__typeof__foaf:Image img__fid__5997 img__view_mode__media_original attr__format__media_original" height="208" src="http://de.parliamentwatch.silversurfer/sites/abgeordnetenwatch.de/files/martin-reyher.jpg" style="margin-right:5px;padding:5px;" title="" typeof="foaf:Image" width="138" />Für Informationen zu Parteispenden, Nebentätigkeiten<br />
sowie für Datenmaterial zu Abgeordneten</p>

<p><strong>Martin Reyher</strong></p>

<p>Telefon: 040 / 317 69 10 - 38<br />
Fax: 040 / 317 69 10 - 28<br />
reyher@abgeordnetenwatch.de</p>

<p>Bürozeiten:<br />
Montag - Freitag 10:00 - 16:00 Uhr</p>
</div>
';

  $export['press_contact'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Unsere Medienpartner';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'press_partner';
  $fe_block_boxes->body = '<p style="position: relative; left: 35px; margin-top: 1em;">
	<a target="_blank" rel="nofollow" href="http://www.spiegel.de/"><img alt="" class="attr__format__media_original attr__typeof__foaf:Image img__fid__6001 img__view_mode__media_original media-image" src="http://de.parliamentwatch.silversurfer/sites/abgeordnetenwatch.de/files/logo-spiegelonline.png" style="height:21px; width:150px" title=""></a>
</p>
<p style="position: relative; left: 117px;">
	<a target="_blank" rel="nofollow" href="http://www.sueddeutsche.de/"><img alt="" class="attr__format__media_original attr__typeof__foaf:Image img__fid__6000 img__view_mode__media_original media-image" src="http://de.parliamentwatch.silversurfer/sites/abgeordnetenwatch.de/files/logo-sueddeutsche.png" style="height:29px; width:152px" title=""></a>
</p>
<p style="position: relative; left: 35px;">
	<a target="_blank" rel="nofollow" href="http://www.welt.de/"><img alt="" class="attr__format__media_original attr__typeof__foaf:Image img__fid__5999 img__view_mode__media_original media-image" src="http://de.parliamentwatch.silversurfer/sites/abgeordnetenwatch.de/files/logo-weltonline.png" style="height:23px; width:152px" title=""></a>
</p>
<p style="position: relative; left: 117px;">
	<a target="_blank" rel="nofollow" href="http://www.t-online.de/"><img alt="" class="attr__format__media_original attr__typeof__foaf:Image img__fid__5998 img__view_mode__media_original media-image" src="http://de.parliamentwatch.silversurfer/sites/abgeordnetenwatch.de/files/logo-t-online.png" style="height:22px; width:152px" title=""></a>
</p>';

  $export['press_partner'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Social Media Footer';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'social_media_footer';
  $fe_block_boxes->body = '<ul class="menu">
<li class="first leaf facebook"><a title="" href="https://www.facebook.com/abgeordnetenwatch.de">Facebook</a></li>
<li class="leaf twitter"><a title="" href="https://twitter.com/a_watch">Twitter</a></li>
<li class="leaf google"><a title="" href="https://plus.google.com/101206126881536002255/">Google+</a></li>
<li class="leaf rss"><a title="" href="/rss.xml">RSS</a></li>
</ul>';

  $export['social_media_footer'] = $fe_block_boxes;

  return $export;
}
