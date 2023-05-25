# Agenda on CCP-WSI OpenFOAM Parallel Performance Engineering Workshop

## Day One 5th June 2023

- 12:00 – 13:00 Lunch
- 13:00 – 13:10 Welcome (Stephen)
- 13:10 – 14:00 OpenFOAM Fundamentals (Omar)
  - 50 minutes presentation:
    - OpenFOAM overview (10 minutes)
      - Fundamental purpose
      - Structure of code (libraries and solvers)
    - OpenFOAM case structure (10 minutes)
      - Case directories and files.
      - Create field
      - Input mesh
      - Field variables
    - InterFoam overview (30 minutes)
      - Fundamentals (e.g. PIMPLE)
      - Underlying method (FVM)
      - Derivation of the FVM
      - Interpolation methods
      - Time discretisation
      - Pressure-velocity coupling, SIMPLE, Piso, and Pimple
    - VoF (e.g. MULES)
      - Equations
      - Surface reconstruction
      - Dynamic mesh
      - Advanced capabilities (e.g. 6DoF)
      - Application types (focus on WSI type problems)
      - Different way for wave generation
      - Built-in functions for wave generation
      - WaveToFoam lib
      - Case setup
      - Wave generation properties
      - Wave generation
      - Post processing
- 14:00 – 14:15 Break
- 14:15 – 15:00 Introduction to running on Cloud/HPC (Xiaohu/Stephen)
  - 20 mins presentation + hands-on:
    - Overview of Cloud DAaaS solution for workshop
    - Ensure they can login
    - Put taught elements from presentation into practice – environment set up, running example case, etc.
  - 25 mins presentation:
    - Introduction to clusters/HPC - using ARCHER2 as an example
    - Basic HPC knowledge
    - Log-in to ARCHER2
    - Load OpenFOAM related modules
    - sbatch and submit jobs
    - Monitoring jobs
- 15:00 – 15:30 Break
- 15:30 – 16:45 Moving from serial to parallel OpenFOAM cases (Raynold)
  - 30 mins presentation:
    - Fundamentals (take a serial case and introduce decomposePar plus dicts)
    - Deep-dive into available decomposition methods and when to use them
    - Understanding OpenFOAM’s parallel I/O
  - 45 mins hands-on using Cloud:
    - Take example serial 3D dambreak and take them through parallelizing (trying different decomposition methods, etc.)
    - Practical demonstrations of various parallel I/O options (not using; using with a single master rank; using with multiple master ranks – 1 per node)
- 16:45 – 17:00 Wrap-up and close of the first day (Stephen)
- 18:00 – 21:00 Dinner (details TBC)

## Day Two 6th June 2023

- 09:00 – 09:30 Welcome refreshments
- 09:30 – 10:30 Introduction to programming solvers in OpenFOAM (Wendi)
  - 30 mins presentation:
    - Example driven break-down of the code structure of a typical solver (suggest interFoam)
    - Description of how you would create your own solver based on an existing
    - How might you extend fundamental library capabilities – for example adding a new boundary condition
    - User code through dict files
  - 30 mins hands-on using
    - Create and compile a new solver using an existing (perhaps just a copy of interFoam called something else) 
    - Add some new capability to the new solver 
    - Run an example case involving the new capability 

- 10:30 – 11:00 Break 

- 11:00 – 12:00 Introduction of OpenFOAM parallel programming (Xiaohu) 
  - 30 minutes presentation: 
    - Pstream design 
    - MPI Scatter  
    - Advanced performance considerations 
  - 30 minutes hands-on: 
    - Compile and run some pre-prepared examples to highlight things like different performance that different ways of using MPI can achieve 
    - Add some parallel capability to the new solver from the previous exercise?

- 12:00 – 13:00 Lunch 

- 13:00 – 13:45 Advanced topic 1: OpenFOAM dynamic load balancing (Xiaohu) 

- 13:45 – 14:30 Advanced topic 2: OpenFOAM based code coupling (Stephen) 

- 14:30 – 14:45 Break 

- 14:45 – 15:20 Attendee support session – Meet the experts and present your questions (All) 

- 15:20 – 15:30 Wrap-up and close (Stephen) 
