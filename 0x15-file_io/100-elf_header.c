#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * main - displays the information contained in the ELF header of a file
 * @argc: the number of arguments
 * @argv: the argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
    int fd;
    Elf64_Ehdr header;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: elf_header elf_filename\n");
        exit(98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd < 0)
    {
        fprintf(stderr, "Error: failed to open file %s\n", argv[1]);
        exit(98);
    }

    /* read ELF header */
    if (read(fd, &header, sizeof(header)) != sizeof(header))
    {
        fprintf(stderr, "Error: failed to read ELF header from file %s\n", argv[1]);
        exit(98);
    }

    /* check ELF magic number */
    if (header.e_ident[EI_MAG0] != ELFMAG0 ||
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3)
    {
        fprintf(stderr, "Error: file %s is not an ELF file\n", argv[1]);
        exit(98);
    }

    /* print header information */
    printf("  Magic:   %02x %02x %02x %02x\n",
           header.e_ident[EI_MAG0],
           header.e_ident[EI_MAG1],
           header.e_ident[EI_MAG2],
           header.e_ident[EI_MAG3]);
    printf("  Class:                             %s\n",
           header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" :
           header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" :
           "Unknown");
    printf("  Data:                              %s\n",
           header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
           header.e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" :
           "Unknown");
    printf("  Version:                           %d%s\n",
           header.e_ident[EI_VERSION],
           header.e_ident[EI_VERSION] == EV_CURRENT ? " (current)" : "");
    printf("  OS/ABI:                            %s\n",
           header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX System V ABI" :
           header.e_ident[EI_OSABI] == ELFOSABI_HPUX ? "HP-UX ABI" :
           header.e_ident[EI_OSABI] == ELFOSABI_NETBSD ? "NetBSD ABI" :
           header.e_ident[EI_OSABI] == ELFOSABI_LINUX ? "Linux ABI" :
           header.e_ident[EI_OSABI] == ELFOSABI_SOLARIS ? "Solaris ABI" :
           header.e_ident[EI_OSABI] == ELFOSABI_IRIX ? "IRIX ABI" :
           header.e_ident[EI_OSABI] == ELFOSABI_FREEBSD ? "FreeBSD ABI" :
           header.e_ident[EI_OSABI] == ELFOSABI_TRU64 ? "TRU64 UNIX ABI" :
           header.e_ident[EI_OSABI] == ELFOSABI_ARM ? "ARM architecture ABI
printf("  Start of program headers:          %lu (bytes into file)\n",
       (unsigned long) header.e_phoff);
printf("  Start of section headers:          %lu (bytes into file)\n",
       (unsigned long) header.e_shoff);
printf("  Flags:                             0x%x\n",
       header.e_flags);
printf("  Size of this header:               %hu (bytes)\n",
       header.e_ehsize);
printf("  Size of program headers:           %hu (bytes)\n",
       header.e_phentsize);
printf("  Number of program headers:         %hu\n",
       header.e_phnum);
printf("  Size of section headers:           %hu (bytes)\n",
       header.e_shentsize);
printf("  Number of section headers:         %hu\n",
       header.e_shnum);
printf("  Section header string table index: %hu\n",
       header.e_shstrndx);

return (0);
}
