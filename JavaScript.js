let result = 0;

        function boton1() {
            result = 1;
        }

        function boton2() {
            result = 2;
        }
        function boton3() {
            result = 3;
        }
        function boton4() {
            result = 4;
        }
        function boton5() {
            result = 5;
        }

        function enviar() {
            if (result >= 1 && result <= 5) {
                localStorage.setItem("result", result);
                window.open("Second_page.html");
            } else {
                alert("Por favor, seleccione un número del 1 al 5 antes de enviar.");
            }
        }