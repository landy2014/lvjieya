var gulp = require('gulp');
var sass = require('gulp-sass');
var htmlreplace = require('gulp-html-replace');
var fileinclude = require('gulp-file-include');

gulp.watch('./src/views/**/*.scss', function (event) {
  return gulp.src(event.path)
    .pipe(sass())
    .pipe(gulp.dest('./dev/style'));
});

gulp.watch('./src/views/**/*.html', function (event) {
  return gulp.src(event.path)
    .pipe(fileinclude({
      prefix: '@@',
      basepath: './src/widgets/'
    }))
    .pipe(gulp.dest('./dev'));
});

gulp.watch('./src/views/**/*.js', function (event) {
  return gulp.src(event.path)
    .pipe(gulp.dest('./dev/js'));
});