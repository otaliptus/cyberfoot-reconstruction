// Address: 0065bdec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0065bdec(undefined4 param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 *local_c;
  int *local_8;
  
  if (*(short *)(*(int *)PTR_DAT_0066b760 + 0x44) != -0xb) {
    FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0xffeb);
  }
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 == 4) {
    cVar2 = FUN_00651f8c();
    if (cVar2 != '\0') {
      FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0);
    }
  }
  if ((iVar1 == 1) && (DAT_007c9634 == 0)) {
    (**(code **)(**(int **)(DAT_007c9610 + 0x168) + 8))
              (*(int **)(DAT_007c9610 + 0x168),DAT_007c95fc);
    DAT_007c9634 = 1;
  }
  if ((iVar1 == 2) && (DAT_007c9638 == 0)) {
    (**(code **)(**(int **)(DAT_007c9614 + 0x168) + 8))
              (*(int **)(DAT_007c9614 + 0x168),DAT_007c9600);
    DAT_007c9638 = 1;
  }
  if ((iVar1 == 3) && (iRam007c963c == 0)) {
    (**(code **)(**(int **)(DAT_007c9618 + 0x168) + 8))
              (*(int **)(DAT_007c9618 + 0x168),DAT_007c9604);
    iRam007c963c = 1;
  }
  if ((iVar1 == 4) && (iRam007c9640 == 0)) {
    cVar2 = FUN_00651f8c();
    if (cVar2 == '\0') {
      (**(code **)(**(int **)(DAT_007c961c + 0x168) + 8))
                (*(int **)(DAT_007c961c + 0x168),DAT_007c9608);
      iRam007c9640 = 1;
    }
  }
  iVar4 = 1;
  piVar3 = &DAT_007c9634;
  local_8 = &DAT_007c9610;
  local_c = &DAT_007c95ec;
  do {
    if ((iVar1 != iVar4) && (*piVar3 == 1)) {
      (**(code **)(**(int **)(*local_8 + 0x168) + 8))(*(int **)(*local_8 + 0x168),*local_c);
      *piVar3 = 0;
    }
    iVar4 = iVar4 + 1;
    local_c = local_c + 1;
    local_8 = local_8 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 != 5);
  DAT_007c9644 = 1;
  return;
}

