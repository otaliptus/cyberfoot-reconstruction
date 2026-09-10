// Address: 00431db8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00431db8(void)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  
  bVar3 = 0;
  iVar2 = MulDiv(8,DAT_0066c89c,0x48);
  DAT_006626a4 = -iVar2;
  if (PTR_DAT_0066b7ac[0xc] != '\0') {
    cVar1 = FUN_00431d74();
    if (cVar1 == -0x80) {
      s_MS_Sans_Serif_006626ab[0] = (char)DAT_00431e18;
      s_MS_Sans_Serif_006626ab[1] = DAT_00431e18._1_1_;
      s_MS_Sans_Serif_006626ab[2] = DAT_00431e18._2_1_;
      s_MS_Sans_Serif_006626ab[3] = DAT_00431e18._3_1_;
      *(undefined4 *)(s_MS_Sans_Serif_006626ab + (uint)bVar3 * -8 + 4) =
           (&DAT_00431e1c)[(uint)bVar3 * -2];
      *(undefined4 *)(s_MS_Sans_Serif_006626ab + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           (&DAT_00431e20)[(uint)bVar3 * -2 + (uint)bVar3 * -2];
      *(undefined4 *)
       (s_MS_Sans_Serif_006626ab + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8 +
       ((uint)bVar3 * -2 + 1) * 4) =
           (&DAT_00431e20 + (uint)bVar3 * -2 + (uint)bVar3 * -2)[(uint)bVar3 * -2 + 1];
      iVar2 = MulDiv(9,DAT_0066c89c,0x48);
      DAT_006626a4 = -iVar2;
      DAT_006626aa = 0x80;
    }
  }
  return;
}

