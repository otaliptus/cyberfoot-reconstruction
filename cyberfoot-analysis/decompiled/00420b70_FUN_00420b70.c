// Address: 00420b70
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00420b70(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint param_4,int param_5
                 )

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int extraout_EDX;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  uint local_18;
  
  if ((param_5 == 0) && (param_4 == 0)) {
    puStack_2c = (undefined1 *)0x0;
    puStack_30 = (undefined1 *)0x0;
    uStack_34 = 0x420b95;
    FUN_004208f4(param_2);
    puStack_2c = (undefined1 *)0x420b9b;
    param_4 = (**(code **)*param_2)();
    param_5 = extraout_EDX;
  }
  if (param_5 == 0) {
    if (param_4 < 0xf001) {
LAB_00420bc9:
      local_18 = param_4;
      goto LAB_00420bcf;
    }
  }
  else if (param_5 < 1) goto LAB_00420bc9;
  local_18 = 0xf000;
LAB_00420bcf:
  puStack_2c = (undefined1 *)0x420bd7;
  uVar2 = FUN_004027fc(local_18);
  puStack_30 = &LAB_00420c4c;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  do {
    puVar1 = puStack_2c;
    if ((param_5 == 0) && (param_4 == 0)) {
      *in_FS_OFFSET = uStack_34;
      puStack_2c = &LAB_00420c53;
      puStack_30 = (undefined1 *)0x420c4b;
      FUN_0040281c(uVar2,local_18,puVar1);
      return;
    }
    uVar3 = local_18;
    if ((int)local_18 >> 0x1f == param_5) {
      if (param_4 <= local_18) {
LAB_00420c01:
        uVar3 = param_4;
      }
    }
    else if (param_5 <= (int)local_18 >> 0x1f) goto LAB_00420c01;
    FUN_00420b00(param_2,uVar2,uVar3);
    FUN_00420b38(param_1,uVar2,uVar3);
    bVar4 = param_4 < uVar3;
    param_4 = param_4 - uVar3;
    param_5 = (param_5 - ((int)uVar3 >> 0x1f)) - (uint)bVar4;
  } while( true );
}

