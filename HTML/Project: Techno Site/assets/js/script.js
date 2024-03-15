$(document).ready(function () {
    var slides = $('.slideshow-products img');
    var slideIndex = 0;

    function showSlide(index) {
        slides.hide();
        slides.eq(index).fadeIn();
    }

    function nextSlide() {
        slideIndex++;
        if (slideIndex >= slides.length) {
            slideIndex = 0;
        }
        showSlide(slideIndex);
    }

    showSlide(slideIndex);
    setInterval(nextSlide, 9000);
});
