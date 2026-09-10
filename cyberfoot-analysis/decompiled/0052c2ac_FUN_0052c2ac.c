// Address: 0052c2ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0052c2ac(undefined4 param_1,int *param_2,int *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int SrcHeight;
  int SrcWidth;
  int iVar5;
  int iVar6;
  HDC hdc;
  undefined4 *in_FS_OFFSET;
  int xDest;
  int yDest;
  int xSrc;
  int ySrc;
  BITMAPINFO *lpbmi;
  UINT iUsage;
  DWORD rop;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  BITMAPINFO *local_c;
  undefined4 local_8;
  
  xDest = *param_2;
  yDest = param_2[1];
  iVar6 = param_2[2];
  iVar5 = param_2[3];
  puStack_38 = (undefined1 *)0x52c2ca;
  local_8 = param_1;
  uVar2 = (**(code **)(*param_3 + 100))();
  puStack_38 = (undefined1 *)0x52c2d5;
  FUN_0042c848(uVar2,&local_14,&local_18);
  puStack_38 = (undefined1 *)0x52c2dd;
  local_c = (BITMAPINFO *)FUN_004027fc(local_14);
  puStack_38 = (undefined1 *)0x52c2e8;
  pvVar3 = (void *)FUN_004027fc(local_18);
  puStack_3c = &LAB_0052c378;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_38 = &stack0xfffffffc;
  local_10 = pvVar3;
  uVar2 = (**(code **)(*param_3 + 0x24))();
  uVar4 = (**(code **)(*param_3 + 100))();
  FUN_0042c900(uVar4,uVar2,local_c,pvVar3);
  rop = 0xcc0020;
  iUsage = 0;
  pvVar3 = local_10;
  lpbmi = local_c;
  SrcHeight = (**(code **)(*param_3 + 0x20))();
  SrcWidth = (**(code **)(*param_3 + 0x2c))();
  ySrc = 0;
  xSrc = 0;
  iVar5 = iVar5 - yDest;
  iVar6 = iVar6 - xDest;
  hdc = (HDC)FUN_0042b5a8(local_8);
  StretchDIBits(hdc,xDest,yDest,iVar6,iVar5,xSrc,ySrc,SrcWidth,SrcHeight,pvVar3,lpbmi,iUsage,rop);
  puVar1 = puStack_38;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_0052c37f;
  puStack_3c = (undefined1 *)0x52c36f;
  FUN_0040281c(local_c,uStack_40,puVar1);
  puStack_3c = (undefined1 *)0x52c377;
  FUN_0040281c(local_10);
  return;
}

