function suma50lenta() {
  let suma = 0;
  for (let i = 1; i <= 50; i++)
    suma = suma + i;
  return suma;
}

function suma50rapida() {
  return (50 * 51) / 2;
}

function sumaN(n) {
  return ( (n * (n + 1.0)) / 2.0 );
}

function swap(array, j, k) {
  let temp = array[j];   // variable auxiliar para no perder array[j]
  array[j] = array[k];
  array[k] = temp;
}

function mezclar(array) {
  for (let i = 0; i < 100; i++) {
    let j = Math.floor(Math.random() * array.length);
    let k = Math.floor(Math.random() * array.length);
    swap(array, j, k);
  }
  return array;
}

console.log(sumaN(100));


let juan = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
juan = mezclar(juan);
console.log(juan);

// ejercicio no se cuanto

let listaDeContactos = [];

let licciardi = {
  name: 'Licciardi',
  phone: 44444,
  isAlive: true,
  mail: 'licciardi@mail.com'
};

let santiago = {
  name: 'Santiago',
  phone: 44444,
  isAlive: true,
  mail: 'santiago@mail.com'
};

function agregarContacto(persona, lista) {
  lista.push(persona);
  return lista;
}


agregarContacto(santiago, listaDeContactos);

console.log(agregarContacto(licciardi, listaDeContactos));

let cadena = 1 + "\n \t \b" + 2;

console.log(cadena);
console.log(typeof cadena);

let lista2 = [3, 3, 6,4];

lista2[1000] = 'kjaskdjk';
for (let elemento of lista2) {
  console.log(`Elemento: ${elemento}`);
}
lista2.push('hola');
lista2.push('344');
console.log(lista2.pop());
