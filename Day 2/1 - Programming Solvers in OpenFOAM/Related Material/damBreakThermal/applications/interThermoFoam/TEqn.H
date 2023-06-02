    volScalarField Deff
    (
        "Deff",
        (alpha1*k1/Cv1 + (scalar(1)-alpha1)*k2/Cv2)
    );

    solve
    (
        fvm::ddt(rho, T)
       +fvm::div(rhoPhi, T)
       -fvm::laplacian(Deff, T)
    );
