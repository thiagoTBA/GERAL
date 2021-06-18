$(function() {
    var url = window.location;
    var element = $('ul.nav a').filter(function() {
        return this.href == url || url.href.indexOf(this.href) == 0;
    }).addClass('active').parent().parent().addClass('in').parent();
    if (element.is('li')) {
        element.addClass('active');
    }
});
$(document).on('keyup mouseup',function(){
    var produtos = $("input[type=number]");
    var total = 0;
    for(i = 0; produtos.length; i++){
        var valor = parseInt(produtos[i].value) * parseFloat(produtos[i].getAttribute("data"));
        total = total + valor;
        $("#total").text(total.toFixed(2));
    }
});