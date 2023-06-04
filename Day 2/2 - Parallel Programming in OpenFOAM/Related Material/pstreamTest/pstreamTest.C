#include "fvCFD.H"

int main(int argc, char* argv[]){

    #include "setRootCase.H"
    #include "createTime.H"
    #include "createMesh.H"

    //use Pstream::parRun check if it is parallel run

    //If it is parallel run, print the processor rank with Pout

    //calculate the totlal mesh volume
    scalar meshVolume(0.);
    forAll(mesh.V(), cellI){
       meshVolume += mesh.V()[cellI];
    }

    Pout << "Mesh volume on this processor: " << meshVolume << endl;

    // Add the values from all processes together with reduce
    
    Info << "Total mesh volume on all processors: " << meshVolume
         << " over " << returnReduce(mesh.C().size(), sumOp<label>()) 
         << " cells" << endl;

    // Spreading meshVolme across all processors
    
    Pout << "Mesh volume on this processor is now " << meshVolume << endl;

    // Gather and Scatter a List
    List<label> nInternalFaces (Pstream::nProcs()), nBoundaries (Pstream::nProcs());
    nInternalFaces[Pstream::myProcNo()] = mesh.Cf().size();
    nBoundaries[Pstream::myProcNo()] = mesh.boundary().size();

    // Gather the nInternalFaces and nBoundaries on the root 

    // Print the information of the list for each processor on the root
    if ( )
    {
        forAll(nInternalFaces,i)
            Info << "Processor " << i << " has " << nInternalFaces[i]
                 << " internal faces and " << nBoundaries[i] << " boundary patches" << endl;
    }

    // Scatter the list to all tasks

    // As the mesh is decomposed, interfaces between processors are turned
    // into patches, meaning each subdomain sees a processor boundary as a
    // boundary condition.
    forAll(mesh.boundary(),patchI)
        Pout << "Patch " << patchI << " named " << mesh.boundary()[patchI].name() << endl;

    // field value exchange
    #include "createFields.H"

    // asign rho with processor rank
    forAll( rho , icell  )
          rho[icell] =  ; 

    rho.correctBoundaryConditions();

    //use patchNeighbourField to access halo value


    // write out the rho and vis with paraview 
    rho.correctBoundaryConditions();
    rho.write();

    return 0;
}
