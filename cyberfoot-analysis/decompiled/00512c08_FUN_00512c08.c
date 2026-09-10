// Address: 00512c08
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00512c08(int *param_1,char param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 uStack_10;
  
  cVar2 = FUN_0050b340(param_1[0x135],param_1[0x128]);
  if (cVar2 != '\0') {
    (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_1[0x128]);
    cVar2 = FUN_0050a2a0();
    if (cVar2 == '\0') {
      if (param_2 == '\0') {
        FUN_005127dc(param_1,0);
      }
      else {
        FUN_005127dc(param_1,2);
      }
    }
    else {
      if ((char)param_1[0xb8] == '\0') {
        iVar3 = (**(code **)(*param_1 + 0x138))();
        iVar4 = (**(code **)(*param_1 + 0x10c))();
        if (iVar4 < iVar3) {
          (**(code **)(*param_1 + 0x1fc))(param_1,DAT_00512d04);
          FUN_0050aef4(param_1[0x135]);
          uStack_18 = FUN_0050a2cc();
          uStack_14 = (**(code **)(*param_1 + 0x138))();
          if (param_2 == '\0') {
            uStack_10 = 0;
          }
          else {
            uStack_10 = 2;
          }
          uVar1 = uStack_10;
          FUN_00403c80(param_1,&uStack_18,&uStack_14);
          FUN_0050ed44(param_1,uVar1);
          return;
        }
      }
      if (*(char *)((int)param_1 + 0x4d2) != '\0') {
        FUN_004e87e8(param_1);
      }
    }
  }
  return;
}

