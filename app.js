const fs = require('fs');
const data = require('./data.json');
const express = require('express');
const bodyParser = require('body-parser');
const app = express();

app.set('view engine', 'pug');

app.use(bodyParser.urlencoded({extended: false}));

app.get('/', (req, res) => {
	res.render('explanation');
});

app.get('/register', (req, res) => {
	console.log(data);
	res.render('register_form');
});

app.post('/register', (req, res) => {
	const user = req.body;

	user.id = data.currentID;
	user.interesses = [];
	data.currentID += 1;
	data.users.push(user);

	const json = JSON.stringify(data);
	fs.writeFileSync('data.json', json);
	res.redirect(`/explanation/${user.id}`);
});

app.get('/explanation/:id', (req, res) => {
	const id = req.params.id;
	const user = data.users.find(user => user.id == id);

	if (!user) {
		res.status(404);
		return res.render('not_found');
	}

	res.render('explanation', { user });
});

app.get('/interests', (req, res) => {

});

app.get('/interests/:id', (req, res) => {
	const id = req.params.id;
	const user = data.users.find(user => user.id == id);

	if (!user) {
		res.status(404);
		return res.render('not_found');
	}

	res.render('interests', { user });
});


app.listen(3000, () => console.log('App is running on port 3000'));
