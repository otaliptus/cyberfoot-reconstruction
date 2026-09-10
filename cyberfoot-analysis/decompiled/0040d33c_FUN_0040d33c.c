// Address: 0040d33c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0040d33c(int param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  while( true ) {
    iVar3 = FUN_00404ba4(param_1);
    if ((iVar3 < *param_2) ||
       (cVar1 = *(char *)(param_1 + -1 + *param_2),
       iVar3 = CONCAT31((int3)((uint)*param_2 >> 8),cVar1 + -0x3a), (byte)(cVar1 - 0x30U) < 10))
    break;
    uVar2 = (uint)*(byte *)(param_1 + -1 + *param_2);
    if ((*(byte *)((int)&DAT_00662134 + ((int)uVar2 >> 3)) >> (uVar2 & 7) & 1) == 0) {
      *param_2 = *param_2 + 1;
    }
    else {
      iVar3 = FUN_0040efe8(param_1,*param_2);
      *param_2 = iVar3;
    }
  }
  return iVar3;
}

