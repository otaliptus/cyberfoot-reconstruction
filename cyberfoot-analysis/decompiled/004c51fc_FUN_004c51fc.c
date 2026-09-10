// Address: 004c51fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c51fc(int param_1,int param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  undefined1 local_57;
  byte local_56;
  undefined1 local_55 [32];
  undefined1 local_35;
  byte local_34;
  undefined1 local_33 [35];
  
  FUN_004c4ca4(param_1,param_2,&local_57,1,&local_35);
  bVar5 = (*(byte *)(param_1 + 1) & 0x80) != 0;
  bVar6 = (*(byte *)(param_2 + 1) & 0x80) != 0;
  *param_3 = local_57;
  if ((bVar5 == bVar6) || ((local_34 & 0x3f) <= (local_56 & 0x3f))) {
    param_3[1] = local_56;
  }
  else {
    uVar1 = FUN_004c4a30(local_56);
    param_3[1] = uVar1;
  }
  FUN_004032a8(param_3 + 2,0x20,0,param_2,local_55,local_33);
  if (bVar5 == bVar6) {
    FUN_004c48d0();
  }
  else {
    uVar2 = FUN_004c47d4();
    uVar3 = FUN_004c47d4();
    if (uVar3 < uVar2) {
      FUN_004c4818();
    }
    else if (uVar2 < uVar3) {
      FUN_004c4818();
      uVar1 = FUN_004c4a30(param_3[1]);
      param_3[1] = uVar1;
    }
    else {
      iVar4 = FUN_004c4988();
      if (iVar4 < 0) {
        FUN_004c4818();
        uVar1 = FUN_004c4a30(param_3[1]);
        param_3[1] = uVar1;
      }
      else {
        FUN_004c4818();
      }
    }
  }
  return;
}

