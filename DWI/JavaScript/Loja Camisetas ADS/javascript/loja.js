document.addEventListener('DOMContentLoaded', function () {
    const nomeInput = document.getElementById('nome');
    const emailInput = document.getElementById('email');
    const ajudaNome = document.getElementById('ajuda_nome');
    const ajudaEmail = document.getElementById('ajuda_email');
    const quantCamMascInput = document.getElementById('quantCamMasc');
    const quantCamFemInput = document.getElementById('quantCamFem');
    const totalInput = document.getElementById('total');
    const btMaisMasc = document.getElementById('bt+Masc');
    const btMenosMasc = document.getElementById('bt-Masc');
    const btMaisFem = document.getElementById('bt+Fem');
    const btMenosFem = document.getElementById('bt-Fem');
    const concluirButton = document.getElementById('concluir');

    const precoCamisaMasc = 25.00; 
    const precoCamisaFem = 20.00; 

    
    function validaNome() {
        if (nomeInput.value.length < 2) {
            ajudaNome.textContent = "Nome inválido";
        } else {
            ajudaNome.textContent = "";
        }
    }

    function validaEmail() {
        const emailPattern = /^[^\s@]+@[^\s@]+\.[^\s@]+$/
        if(!emailPattern.test(emailInput.value)) {
            ajudaEmail.textContent = 'E-mail inválido!'
        }else {
            ajudaEmail.textContent = ""
        }
    }

    

    nomeInput.addEventListener('input', validaNome);
    emailInput.addEventListener('input', validaEmail)
})