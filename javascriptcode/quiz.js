const questions = [
  {
    question: "Which language is used for web styling?",
    answers: [
      { text: "HTML", correct: false },
      { text: "CSS", correct: true },
      { text: "Python", correct: false },
      { text: "C++", correct: false }
    ]
  },
  {
    question: "Which language makes websites interactive?",
    answers: [
      { text: "JavaScript", correct: true },
      { text: "HTML", correct: false },
      { text: "SQL", correct: false },
      { text: "CSS", correct: false }
    ]
  },
  {
    question: "What does HTML stand for?",
    answers: [
      { text: "Hyper Trainer Marking Language", correct: false },
      { text: "Hyper Text Markup Language", correct: true },
      { text: "High Text Machine Language", correct: false },
      { text: "Hyper Text Markdown Language", correct: false }
    ]
  }
];

const questionElement = document.getElementById("question");
const answerButtons = document.getElementById("answer-buttons");
const nextButton = document.getElementById("next-btn");
const resultBox = document.getElementById("result");
const scoreElement = document.getElementById("score");
const restartButton = document.getElementById("restart-btn");

let currentQuestionIndex = 0;
let score = 0;

function startQuiz() {
  currentQuestionIndex = 0;
  score = 0;
  resultBox.classList.add("hide");
  document.getElementById("quiz").style.display = "block";
  nextButton.style.display = "none";
  showQuestion();
}

function showQuestion() {
  resetState();

  let currentQuestion = questions[currentQuestionIndex];
  questionElement.innerText = currentQuestion.question;

  currentQuestion.answers.forEach(answer => {
    const button = document.createElement("button");
    button.innerText = answer.text;
    button.classList.add("btn");

    if (answer.correct) {
      button.dataset.correct = answer.correct;
    }

    button.addEventListener("click", selectAnswer);
    answerButtons.appendChild(button);
  });
}

function resetState() {
  nextButton.style.display = "none";

  while (answerButtons.firstChild) {
    answerButtons.removeChild(answerButtons.firstChild);
  }
}

function selectAnswer(e) {
  const selectedBtn = e.target;
  const correct = selectedBtn.dataset.correct === "true";

  if (correct) {
    selectedBtn.classList.add("correct");
    score++;
  } else {
    selectedBtn.classList.add("wrong");
  }

  Array.from(answerButtons.children).forEach(button => {
    if (button.dataset.correct === "true") {
      button.classList.add("correct");
    }

    button.disabled = true;
  });

  nextButton.style.display = "block";
}

nextButton.addEventListener("click", () => {
  currentQuestionIndex++;

  if (currentQuestionIndex < questions.length) {
    showQuestion();
  } else {
    showResult();
  }
});

function showResult() {
  document.getElementById("quiz").style.display = "none";
  resultBox.classList.remove("hide");
  scoreElement.innerText = `${score} / ${questions.length}`;
}

restartButton.addEventListener("click", startQuiz);

startQuiz();