const fs = require('fs');
const data = require('./data.json');
const express = require('express');
const bodyParser = require('body-parser');
const app = express();

app.set('view engine', 'pug');

app.use(bodyParser.urlencoded({extended: false}));

app.get('/register', (req, res) => {
	console.log(data);
	res.render('register_form');
});

app.post('/register', (req, res) => {
	const user = req.body;

	user.id = data.currentID;
	data.currentID += 1;
	data.users.push(user);

	const json = JSON.stringify(data);
	fs.writeFileSync('data.json', json);

	
});


app.listen(3000, () => console.log('App is running on port 3000'));
