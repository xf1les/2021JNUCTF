function prompt_func(e,t,a=2000){
    var o='<div class="toast mx-auto mt-2 font-weight-bold text-center" role="alert" aria-live="assertive" aria-atomic="true" data-delay="{{delay}}"><div class="toast-body bg-{{level}} text-white">{{message}}</div></div>';//https://getbootstrap.com/docs/4.3/components/toasts/
    o=o.replace("{{message}}",e),o=o.replace("{{level}}",t),o=o.replace("{{delay}}",a +""),$("#prompt_bar").append(o);
    var s=$("#prompt_bar .toast:last");
    s.toast("show"),setTimeout(function(){s.remove()},a+2e3);
}