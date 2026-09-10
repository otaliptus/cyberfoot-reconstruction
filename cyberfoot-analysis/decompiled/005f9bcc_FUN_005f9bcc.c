// Address: 005f9bcc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005f9bcc(undefined4 param_1)

{
  undefined *puVar1;
  char *pcVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_0066ac78;
  iVar3 = *(int *)(PTR_DAT_0066ac78 + 0x88);
  if ((iVar3 == 4) || (iVar3 == 6)) {
    *(undefined4 *)PTR_DAT_0066b484 = 1;
  }
  else {
    *(undefined4 *)PTR_DAT_0066b484 = 0;
  }
  if (iVar3 == 3) {
    *(undefined4 *)PTR_DAT_0066b09c = 0;
    iVar3 = 0;
    pcVar2 = PTR_DAT_0066ae98 + 0x52c;
    do {
      if (((*pcVar2 != '\0') && (pcVar2[1] != '\0')) && (pcVar2[3] == '\0')) {
        *(int *)PTR_DAT_0066b09c = iVar3;
        break;
      }
      iVar3 = iVar3 + 1;
      pcVar2 = pcVar2 + 0x568;
    } while (iVar3 != 0x1b);
    if ((*(int *)PTR_DAT_0066b09c == 0) && (*(int *)(PTR_DAT_0066ae98 + 0x510) == 0)) {
      if ((PTR_DAT_0066ae98[0x8c55] == '\0') || (PTR_DAT_0066ae98[0x8c57] != '\0')) {
        if ((PTR_DAT_0066ae98[0x667d] == '\0') || (PTR_DAT_0066ae98[0x667f] != '\0')) {
          if ((PTR_DAT_0066ae98[0x3b3d] == '\0') || (PTR_DAT_0066ae98[0x3b3f] != '\0')) {
            iVar3 = 0;
            pcVar2 = PTR_DAT_0066ae98 + 0x52d;
            do {
              if ((*pcVar2 != '\0') && (pcVar2[2] == '\0')) {
                *(int *)PTR_DAT_0066b09c = iVar3;
                break;
              }
              iVar3 = iVar3 + 1;
              pcVar2 = pcVar2 + 0x568;
            } while (iVar3 != 0x1b);
          }
          else {
            *(undefined4 *)PTR_DAT_0066b09c = 10;
          }
        }
        else {
          *(undefined4 *)PTR_DAT_0066b09c = 0x12;
        }
      }
      else {
        *(undefined4 *)PTR_DAT_0066b09c = 0x19;
      }
    }
    if (((*(int *)PTR_DAT_0066b09c == 0) && (0 < *(int *)(PTR_DAT_0066ae98 + 0x510))) &&
       (PTR_DAT_0066ae98[0x52f] != '\0')) {
      iVar3 = 0;
      pcVar2 = PTR_DAT_0066ae98 + 0x52d;
      do {
        if ((*pcVar2 != '\0') && (pcVar2[2] == '\0')) {
          *(int *)PTR_DAT_0066b09c = iVar3;
          break;
        }
        iVar3 = iVar3 + 1;
        pcVar2 = pcVar2 + 0x568;
      } while (iVar3 != 0x1b);
    }
  }
  FUN_004e1a98();
  FUN_005f4074(param_1);
  FUN_00483bc4(DAT_006d3f38);
  if (*(int *)(puVar1 + 0x88) == 4) {
    if (((puVar1[0x175] != '\0') || (puVar1[0x176] != '\0')) ||
       ((puVar1[0x177] != '\0' || (puVar1[0x178] != '\0')))) {
      FUN_00483d6c(*(undefined4 *)PTR_DAT_0066b6a4);
      return;
    }
    FUN_00618ac8(*(undefined4 *)PTR_DAT_0066b6a4);
  }
  else {
    FUN_00483d6c(*(undefined4 *)PTR_DAT_0066b6a4);
  }
  return;
}

