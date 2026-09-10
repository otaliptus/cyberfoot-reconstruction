// Address: 00484518
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00484518(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x224) == 0) {
    FUN_004666fc(param_1,param_2);
  }
  else {
    uVar1 = FUN_004673cc(*(int *)(param_1 + 0x224),0xb043,*(undefined4 *)(param_2 + 4),
                         *(undefined4 *)(param_2 + 8));
    *(undefined4 *)(param_2 + 0xc) = uVar1;
  }
  return;
}

