// Address: 00470e28
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00470e28(int *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 local_14 [8];
  undefined1 local_c [4];
  int *local_8;
  
  puVar3 = &stack0xfffffffc;
  local_8 = param_1;
  iVar1 = FUN_0046f1dc(param_1,param_2);
  if (iVar1 == 0) {
    if (param_3 != '\0') {
      FUN_0041c968(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),local_14);
      iVar1 = FUN_0046f9d0(local_8,local_14,local_c);
      if (iVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(iVar1 + 4);
      }
      uVar2 = FUN_00470bf4(param_2,uVar4);
      (**(code **)(*local_8 + 8))(local_8,param_2,uVar2,uVar4);
    }
  }
  else {
    if (param_3 == '\0') {
      FUN_00470c70();
    }
    else {
      puVar3 = &stack0xfffffffc;
      FUN_00470cf0();
    }
    iVar1 = *(int *)local_8[5];
    (**(code **)(iVar1 + 0x7c))((int *)local_8[5],iVar1,puVar3);
  }
  return;
}

