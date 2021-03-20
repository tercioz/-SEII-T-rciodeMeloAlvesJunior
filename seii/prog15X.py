import datetime
import pytz

dt_str = 'June 20, 2011'
dt = datetime.datetime.strptime(dt_str, '%B %d, %Y')
print(dt)