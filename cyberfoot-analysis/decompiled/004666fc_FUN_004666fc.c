// Address: 004666fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004666fc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0047e4c0(param_1);
  if ((iVar1 == 0) || (param_1 == iVar1)) {
    uVar2 = FUN_004673cc(param_1,0xb043,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
    *(undefined4 *)(param_2 + 0xc) = uVar2;
  }
  else {
    FUN_00403c80(iVar1,param_2);
  }
  return;
}

