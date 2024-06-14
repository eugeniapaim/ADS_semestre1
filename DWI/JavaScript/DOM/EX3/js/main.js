



botao.addEventListener("click", mensagem);

function verificaNome() {
    var nome = document.getElementById('nome');
    var alertanome = document.getElementsByClassName('nome');
    if(nome.length === '') {
        alertanome.textContent("Nome inválido!")
    }
}