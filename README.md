# BombCat
We four roommates decide to write a game called BombCat to practice our C programming skills.

About the project:

Developers:
1.JerryQ17
2.Loyalty031
3.Luke-Evan
4.(unknown)

Timetable:The project will be completed in this term.

The project can be found on GitHub(https://github.com/JerryQ17/BombCat.git).

About the game:

This is a card game which has four players(maybe robots).

The function of cards:
1.**Bomb**:If there's a **_Bomb_** in your hand,**discard it immediately**.Then check whether there's a **_Remove_** in your hand.
If there's a **_Remove_** in your hand luckily,then discard a **_Remove_** as well.
If there's no **_Remove_** in your hand,then,unfortunately,you **lose** the game.

2.**Remove**:Remove a **_Bomb_**.(It's the most **important** card in the game!!!)

3.**Blank**:**No** function(just skip the discard stage).

4.**Foresee**:You can see three cards on the top of the pile,then put them back to the top of the pile.(You **mustn't** change the order of the three cards.)

5.**Trick**:Shuffle the pile.

6.**Skip**:Skip your draw card stage.

7.**Reject**:Unlike other cards that can only be discarded in your turn,**_Reject_** can be discarded anytime a player discard a _card_.
Once you discard a **_Reject_**,the _card_ will lose its function.
Attention:You can't reject **_Remove_** and **_Reject_** itself.

8.**Favor**:You can choose a player and get a card in his/her hand.

9.**Attack**:Skip your draw card stage.The next player have to play two turns.

The rule of the game:

At the beginning,every player have five cards in his/her hand(at least a **_Remove_** in case you lose at the beginning).
Every turn,the corresponding player should check whether there's a **_Bomb_** in his/her hand.
If there's a Bomb,he/she should check whether there's a **_Remove_** in his/her hand.
If there is a **_Remove_**, you should discard
If there isn't a **_Remove_**,he/she will lose the game.
Then the player goes to the discard stage. He/She needs to discard a card.
After the function of the card discarded come into effect,the player will get the card on the top of the pile.
Check whether the card is a **_Bomb_** or not.
Then it's the next player's turn.
 