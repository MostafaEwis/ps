/**
 * @param {string} start
 * @param {string} target
 * @return {boolean}
 */
var canChange = function(start, target) {
	let s = []
	let t = []
	if(start.length != target.length) return false
	for(let i = 0; i < start.length; i++){
		if(start[i] != '_') s.push(i);
		if(target[i] != '_') t.push(i);
		
	}
	if(s.length != t.length) return false;
	for(let i = s.length - 1; i >= 0; i--){
		if(start[s[i]] != target[t[i]]) return false;
		if(start[s[i]] == 'R')
			if(s[i] > t[i]) return false

		if(start[s[i]] == 'L')
			if(s[i] < t[i]) return false
	}
	
	return true;
};

