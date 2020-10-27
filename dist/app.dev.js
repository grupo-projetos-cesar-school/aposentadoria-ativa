"use strict";

var express = require('express');

var bodyParser = require('body-parser');

var app = express();
app.set('view engine', 'pug');
app.use(bodyParser.urlencoded({
  extended: false
}));
app.get('/register', function (req, res) {
  res.render('register_form');
});
app.listen(3000, function () {
  return console.log('App is running on port 3000');
});