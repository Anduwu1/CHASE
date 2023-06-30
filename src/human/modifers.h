/*
 * Copyright 2023 Electro Corparation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef MODIFIER_H
#define MODIFIER_H
class Modifier {
private:
	// Modifers
	float
		strength,
		agression,
		intelligence,
		happiness;
public:
	Modifier(
		float strength,
		float agression,
		float intelligence,
		float happiness
	);
};
#endif