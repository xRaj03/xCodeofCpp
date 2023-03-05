#include <iostream>
#include <SDL.h>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

bool running = true;

int main()
{
    // Initialize SDL
    SDL_Init(SDL_INIT_VIDEO);

    // Create the game window
    SDL_Window *window = SDL_CreateWindow("Snake Game",
                                          SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                                          SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

    // Create the game renderer
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);

    // Set up the game variables
    int snake_x = SCREEN_WIDTH / 2;
    int snake_y = SCREEN_HEIGHT / 2;
    int snake_direction = 0;

    int food_x = rand() % SCREEN_WIDTH;
    int food_y = rand() % SCREEN_HEIGHT;

    // Start the game loop
    while (running)
    {
        // Handle user input
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
            {
                running = false;
            }
            else if (event.type == SDL_KEYDOWN)
            {
                if (event.key.keysym.sym == SDLK_UP)
                {
                    snake_direction = 0;
                }
                else if (event.key.keysym.sym == SDLK_DOWN)
                {
                    snake_direction = 1;
                }
                else if (event.key.keysym.sym == SDLK_LEFT)
                {
                    snake_direction = 2;
                }
                else if (event.key.keysym.sym == SDLK_RIGHT)
                {
                    snake_direction = 3;
                }
            }
        }

        // Update the game state
        if (snake_direction == 0)
        {
            snake_y -= 10;
        }
        else if (snake_direction == 1)
        {
            snake_y += 10;
        }
        else if (snake_direction == 2)
        {
            snake_x -= 10;
        }
        else if (snake_direction == 3)
        {
            snake_x += 10;
        }

        if (snake_x < 0 || snake_x >= SCREEN_WIDTH || snake_y < 0 || snake_y >= SCREEN_HEIGHT)
        {
            running = false;
        }

        // Clear the screen
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

        // Draw the snake and food
        SDL_Rect snake_rect = {snake_x, snake_y, 10, 10};
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        SDL_RenderFillRect(renderer, &snake_rect);

        SDL_Rect food_rect = {food_x, food_y, 10, 10};
        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
        SDL_RenderFillRect(renderer, &food_rect);

        // Update the screen
        SDL_RenderPresent(renderer);

        // Wait for a short time to limit the frame rate
        SDL_Delay(100);
    }

    // Clean up and exit
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
