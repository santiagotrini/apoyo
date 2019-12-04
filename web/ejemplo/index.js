const express = require('express');

const app = express();

app.set('view engine', 'pug');
app.set('views', './views');

app.get('/usuario/:nombre', (req, res) => {
  let nombre = req.params.nombre;
  let numeros = [1,2,'3','kajskdjaksjd',true,6];
  res.render('index', { nombre: nombre, numeros: numeros });
});

app.get('/user/:id', (req, res) => {
  res.send('hiciste un GET a / \n');
});

app.put('/', (req, res) => {
  res.send('hiciste un PUT a / \n');
});

app.delete('/user/:id', (req, res) => {
  res.send('hiciste un DELETE a / \n');
});

app.post('/', (req, res) => {
  res.send('hiciste un POST a / \n');
});

app.listen(3000);
