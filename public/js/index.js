const interests = document.getElementsByClassName("main-interests");
const notInterests = document.getElementsByClassName("not-main-interests");

console.log(interests);

for (i = 0; i < notInterests.length; i++) {
	notInterests[i].style.display = 'none';
}

console.log(notInterests);

const filterContainer = document.getElementsByClassName("container filter")[0];
const buttons = document.getElementsByClassName("btn-block");
const viagemButton = buttons[0];
const fotografiaButton = buttons[1];
const iogaButton = buttons[2];
const jardinagemButton = buttons[3];
const exerciciosButton = buttons[4];
const culinariaButton = buttons[5];
const pinturaButton = buttons[6];
const saudeButton = buttons[7];

filterContainer.addEventListener('click', (e) => {
	const highlightedTopicsDiv = document.getElementsByClassName("highlight");
	const highlightedTopics = [];
	// console.log(highlightedTopicsDiv);

	for (i = 0; i < highlightedTopicsDiv.length; i++) {
		let topic = highlightedTopicsDiv[i].textContent.toLowerCase();
		
		if (topic === "exercícios") {
			topic = "exercicios";
		} else if (topic === "culinária") {
			topic = "culinaria";
		} else if (topic === "saúde") {
			topic = "saude";
		}

		highlightedTopics.push(topic);
	}
	
	if (highlightedTopicsDiv.length === 0) {
		for (i = 0; i < notInterests.length; i++) {
			notInterests[i].style.display = 'none';
		}

		for (i = 0; i < interests.length; i++) {
			interests[i].style.display = 'block';
		}
	} else {
		// Fazer aparecer apenas tópicos com assuntos selecionados
		for (i = 0; i < interests.length; i++) {
			const tagName = interests[i].querySelector('p.post-tags').textContent;

			if (highlightedTopics.includes(tagName)) {
				interests[i].style.display = 'block';
				console.log(interests[i]);
			} else {
				interests[i].style.display = 'none';
			}
		}

		for (i = 0; i < notInterests.length; i++) {
			const tagName = notInterests[i].querySelector('p.post-tags').textContent;

			if (highlightedTopics.includes(tagName)) {
				notInterests[i].style.display = 'block';
				console.log(notInterests[i]);
			} else {
				notInterests[i].style.display = 'none';
			}
		}
	}
});


viagemButton.addEventListener('click', (e) => {
	viagemButton.classList.toggle("highlight");
	
	if (viagemButton.classList.contains("highlight")) {
		viagemButton.style.backgroundColor = "rgb(145, 242, 236)";
	} else {
		viagemButton.style.backgroundColor = "rgb(255, 255, 255)";
	}
});

fotografiaButton.addEventListener('click', (e) => {
	fotografiaButton.classList.toggle("highlight");
	
	if (fotografiaButton.classList.contains("highlight")) {
		fotografiaButton.style.backgroundColor = "rgb(145, 242, 236)";
	} else {
		fotografiaButton.style.backgroundColor = "rgb(255, 255, 255)";
	}
});

iogaButton.addEventListener('click', (e) => {
	iogaButton.classList.toggle("highlight");
	
	if (iogaButton.classList.contains("highlight")) {
		iogaButton.style.backgroundColor = "rgb(145, 242, 236)";
	} else {
		iogaButton.style.backgroundColor = "rgb(255, 255, 255)";
	}
});

jardinagemButton.addEventListener('click', (e) => {
	jardinagemButton.classList.toggle("highlight");
	
	if (jardinagemButton.classList.contains("highlight")) {
		jardinagemButton.style.backgroundColor = "rgb(145, 242, 236)";
	} else {
		jardinagemButton.style.backgroundColor = "rgb(255, 255, 255)";
	}

});

exerciciosButton.addEventListener('click', (e) => {
	exerciciosButton.classList.toggle("highlight");
	
	if (exerciciosButton.classList.contains("highlight")) {
		exerciciosButton.style.backgroundColor = "rgb(145, 242, 236)";
	} else {
		exerciciosButton.style.backgroundColor = "rgb(255, 255, 255)";
	}

});

culinariaButton.addEventListener('click', (e) => {
	culinariaButton.classList.toggle("highlight");
	
	if (culinariaButton.classList.contains("highlight")) {
		culinariaButton.style.backgroundColor = "rgb(145, 242, 236)";
	} else {
		culinariaButton.style.backgroundColor = "rgb(255, 255, 255)";
	}
});

pinturaButton.addEventListener('click', (e) => {
	pinturaButton.classList.toggle("highlight");
	
	if (pinturaButton.classList.contains("highlight")) {
		pinturaButton.style.backgroundColor = "rgb(145, 242, 236)";
	} else {
		pinturaButton.style.backgroundColor = "rgb(255, 255, 255)";
	}
});

saudeButton.addEventListener('click', (e) => {
	saudeButton.classList.toggle("highlight");
	
	if (saudeButton.classList.contains("highlight")) {
		saudeButton.style.backgroundColor = "rgb(145, 242, 236)";
	} else {
		saudeButton.style.backgroundColor = "rgb(255, 255, 255)";
	}
});