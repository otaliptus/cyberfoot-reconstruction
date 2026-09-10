// Address: 00487e00
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00487e00(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 in_ZF;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x487e14;
  FUN_00404cf0(*(undefined4 *)(param_1 + 0x54),param_2);
  if (!(bool)in_ZF) {
    puStack_14 = (undefined1 *)0x487e20;
    FUN_00404928(param_1 + 0x54,param_2);
    if (*(short *)(param_1 + 0xfa) == 0) {
      puStack_14 = (undefined1 *)0x487e48;
      uVar2 = FUN_0045facc(PTR_PTR_0045f9d8,1,param_1);
      puStack_14 = (undefined1 *)0x487e55;
      FUN_00473234(uVar2,param_2);
      puStack_18 = &LAB_00487e85;
      uStack_1c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_1c;
      puStack_14 = &stack0xfffffffc;
      FUN_00403c80(uVar2);
      puVar1 = puStack_14;
      *in_FS_OFFSET = uStack_1c;
      puStack_14 = (undefined1 *)0x487e8c;
      puStack_18 = (undefined1 *)0x487e84;
      FUN_00403a84(uVar2,uStack_1c,puVar1);
      return;
    }
    puStack_14 = (undefined1 *)0x487e38;
    (**(code **)(param_1 + 0xf8))(*(undefined4 *)(param_1 + 0xfc),param_1);
  }
  return;
}

