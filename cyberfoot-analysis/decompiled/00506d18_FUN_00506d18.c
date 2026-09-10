// Address: 00506d18
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00506d18(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_30 [4];
  int local_2c;
  int local_28;
  undefined1 local_20 [16];
  
  cVar2 = FUN_00512d08(param_1,*(undefined4 *)(param_1 + 0x554));
  if (cVar2 != '\0') {
    if (*(char *)(param_1 + 700) == '\0') {
      FUN_0050f590(param_1,*(undefined4 *)(param_1 + 0x554),auStack_30);
    }
    else {
      FUN_0050f6c0(param_1,*(undefined4 *)(param_1 + 0x554),auStack_30);
    }
    iVar1 = local_28;
    iVar3 = local_2c;
    if (*(int *)(param_1 + 0x554) != *(int *)(param_1 + 0x4d8)) {
      iVar3 = local_2c + -1;
    }
    FUN_0040709c(0,iVar3 + -5,7,local_20,iVar3 + 6);
    FUN_00513ca4(param_1,local_20);
    FUN_0040709c(iVar1 + -7,iVar3 + -5,iVar1 + 1,local_20,iVar3 + 6);
    FUN_00513ca4(param_1,local_20);
    FUN_0040709c(7,iVar3,local_28,local_20,iVar3 + 1);
    FUN_00513ca4(param_1,local_20);
  }
  return;
}

