/*-----------------
 * zhangzhensheng
 * 2017-09-01
 *-----------------*/

/**
 * 焦点图
 */
$('#j_mainSlider').slide({
  effect: 'fold',
  mainCell: '.main-slider__bd ul',
  titCell: '.main-slider__hd ul',
  autoPlay: true,
  autoPage: '<li class="main-slider__hd-li"></li>'
});