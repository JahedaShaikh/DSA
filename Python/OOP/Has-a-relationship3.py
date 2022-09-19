class SportNews:
    def sportinfo(self):
        print('Sport information-1')
        print('Sport information-2')
        print('Sport information-3')
        print('Sport information-4')

class MovieNews:
    def moviesInfo(self):
        print('Movies Information-1')
        print('Movies Information-2')
        print('Movies Information-3')
        print('Movies Information-4')

class PoliticsNews:
    def politicsInfo(self):
        print('Politics Information-1')
        print('Politics Information-2')
        print('Politics Information-3')
        print('Politics Information-4')

class SanayaNews:
    def __init__(self):
        self.sport=SportNews()
        self.movies=MovieNews()
        self.polics=PoliticsNews()

    def getTotalNews(self):
        print('WELCOME TO SANAYA NEWS')
        self.sport.sportinfo()
        print()
        self.movies.moviesInfo()
        print()
        self.polics.politicsInfo()


dnews= SanayaNews()
dnews.getTotalNews()