// Address: 0048d68c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0048d68c(int *param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)param_1[6];
  iVar3 = FUN_0048ab20();
  if (iVar3 == 0) {
    if (puVar1[9] != 0) {
      *(undefined4 *)(*param_1 + 0x14) = 0x2a;
      (**(code **)*param_1)();
    }
    *(undefined4 *)(*param_1 + 0x14) = 0x78;
    (**(code **)(*param_1 + 4))(param_1,0xffffffff);
    puVar2 = (undefined1 *)puVar1[8];
    *puVar2 = 0xff;
    puVar2[1] = 0xd9;
    iVar3 = 2;
  }
  *puVar1 = puVar1[8];
  puVar1[1] = iVar3;
  puVar1[9] = 0;
  return 1;
}

