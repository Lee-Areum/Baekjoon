import java.util.*;

class Solution {
    public int[] solution(String[] genres, int[] plays) {
        HashMap<String,Integer> genreSum = new HashMap<String,Integer>();
        HashMap<String,ArrayList<Song>> list = new HashMap<String,ArrayList<Song>>();
        for(int i = 0;i<genres.length;i++) {
        	int now = genreSum.get(genres[i])==null?0:genreSum.get(genres[i]);
        	genreSum.put(genres[i], now + plays[i]);
        	if(!list.containsKey(genres[i])) {
        		list.put(genres[i], new ArrayList<Song>());
        	}
        	list.get(genres[i]).add(new Song(i,plays[i]));
        }
        List<String> keySet = new ArrayList<String>(genreSum.keySet());
        keySet.sort(new Comparator<String>() {
        	@Override
        	public int compare(String s1, String s2) {
        		return genreSum.get(s2).compareTo(genreSum.get(s1));
        	}
        });
        ArrayList<Integer> tmp = new ArrayList<Integer>();
        for(String key : keySet) {
        	list.get(key).sort(new Comparator<Song>() {
        		@Override
        		public int compare(Song s1, Song s2) {
        			if(s1.play == s2.play) {
        				return s1.no <= s2.no? -1 : 1;
        			}
        			return s1.play >= s2.play? -1:1;
        		}
        	});
        	for(int i = 0;i<Math.min(2, list.get(key).size());i++) {
        		tmp.add(list.get(key).get(i).no);
        	}
        }
        int[] answer = tmp.stream()
        		.mapToInt(Integer::intValue)
        		.toArray();
        return answer;
    }
}

class Song{
	int no;
	int play;
	
	Song(int no, int play){
		this.no = no;
		this.play = play;
	}
}
