filetype indent on
syntax on
set relativenumber
" Plugins
call plug#begin()

Plug 'preservim/nerdtree'
Plug 'tpope/vim-fugitive'
Plug 'mhinz/vim-startify'
Plug 'vim-airline/vim-airline'
Plug 'morhetz/gruvbox'

call plug#end()
set background=dark
colorscheme gruvbox

" Templates
:autocmd BufNewFile *.cpp 0r ~/.vim/templates/skeleton.cpp
:autocmd BufNewFile *.c 0r ~/.vim/templates/skeleton.c

" Keymappings for compiling
autocmd FileType c map <F10> :w <CR> :!gcc % -o %< && ./%< <CR> :!rm %< <CR>
autocmd FileType cpp map <F10> :w <CR> :!g++ % -o %< && ./%< <CR> :!rm %< <CR>
autocmd FileType python map <F10> :w <CR> :!python % <CR>

" Keymappings for Auto brace completion
autocmd FileType c,cpp inoremap { {}<Esc>ha
autocmd FileType c,cpp,python inoremap ( ()<Esc>ha
autocmd FileType html,xml inoremap < <><Esc>ha
autocmd FileType c,cpp,python inoremap " ""<Esc>ha
autocmd FileType c,cpp,python inoremap ' ''<Esc>ha
