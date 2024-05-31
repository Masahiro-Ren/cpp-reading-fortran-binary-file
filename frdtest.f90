program frdtest
    implicit none
    !real(8) ,dimension(96):: GRD_gz
    !real(8) ,dimension(96):: GRD_gzh

    !open(66, file="GRD_gz_swp.dat", access='stream', form='unformatted', status='old')
    !open(67, file="GRD_gzh_swp.dat", access='stream', form='unformatted', status='old')

    !read(66) GRD_gz(:)
    !read(67) GRD_gzh(:)

    !close(66)
    !close(67)

    !write(*,*) GRD_gz(1)
    !write(*,*) GRD_gzh(1)

    real(8), allocatable:: rhog(:,:,:)
    
    allocate(rhog(16641, 96, 1))
    
    open(66, file="rhog.dat", access='stream', form='unformatted', status='old')
    
    read(66) rhog(:, :, :)
    
    write(*,*) rhog(1,1,1) 
end program frdtest
