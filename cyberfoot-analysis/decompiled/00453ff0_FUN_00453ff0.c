// Address: 00453ff0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00453ff0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined2 local_c;
  
  puStack_1c = (undefined1 *)0x454008;
  FUN_00454f14(param_1);
  puStack_20 = &LAB_00454107;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_0046cabc(param_1);
  FUN_004673cc(param_1,0x41e,0x14,0);
  FUN_004673cc(param_1,0x42f,*(undefined4 *)(param_1 + 0x248),0);
  iVar1 = *(int *)(param_1 + 0x230);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x238);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x240);
      if (iVar1 == 0) {
        uVar3 = 0;
        local_c = 0;
      }
      else {
        uVar3 = *(undefined4 *)(iVar1 + 0x34);
        local_c = (undefined2)*(undefined4 *)(iVar1 + 0x30);
      }
    }
    else {
      uVar3 = *(undefined4 *)(iVar1 + 0x34);
      local_c = (undefined2)*(undefined4 *)(iVar1 + 0x30);
    }
  }
  else {
    uVar3 = *(undefined4 *)(iVar1 + 0x34);
    local_c = (undefined2)*(undefined4 *)(iVar1 + 0x30);
  }
  uVar3 = FUN_00408100(uVar3,CONCAT22(extraout_var,local_c));
  FUN_004673cc(param_1,0x420,0,uVar3);
  if (param_2 < 1) {
    param_2 = 1;
  }
  if (param_3 < 1) {
    param_3 = 1;
  }
  uVar3 = FUN_00408100(param_2,param_3);
  FUN_004673cc(param_1,0x41f,0,uVar3);
  puVar2 = puStack_1c;
  *(int *)(param_1 + 0x210) = param_2;
  *(int *)(param_1 + 0x214) = param_3;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0045410e;
  puStack_20 = (undefined1 *)0x454106;
  FUN_00454f1c(param_1,uStack_24,puVar2);
  return;
}

