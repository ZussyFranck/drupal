// definition du module
// fonction qui gère le contenu dans la partie aide du module
function formation_help($path, $arg) {
  switch ($path) {
    case 'admin/help#formation':
      return '<p>' .t('Hello'). '</p>';
  }
}
//////////////////////

// fonction permettant de gérer le texte dans les droits du module
function formation_permission() {
  return array(
    'administer my module' => array(
      'title' => t('training'),
      'description' => t('how are you'),
    ),
  );
}
///////////////////
///////////////////

